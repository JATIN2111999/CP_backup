const json = require("./data.json");

const data = {};
for (const d of json) {
  data[d.apiName] = new Set(d.dependent);
}


console.log(data);
function dfs(graph, start, visited = null) {
  if (graph[start]) {
    if (visited === null) {
      visited = new Set();
    }
    if (!visited.has(start)) 
        console.log(start, "->", [...graph[start]]);

    visited.add(start);
    let newdata = [...graph[start]].filter((x) => !visited.has(x));
    for (const next of newdata) {
      dfs(graph, next, visited);
    }
    return visited;
  }
}

const gdict = {
  a: new Set(["b", "c", "a"]),
  b: new Set(["a", "d"]),
  c: new Set(["a", "d"]),
  d: new Set(["a", "e"]),
  e: new Set(["a", "e"]),
};
new dfs(data, "google");
