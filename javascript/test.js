const l = "jatin";

function reverse(str) {
  if (str.length === 0) return "";

  console.log(str.length, str.length - 1);
  return (
    str.substring(str.length - 1, str.length) +
    reverse(str.substring(0, str.length - 1))
  );
}

console.log(reverse(l));
