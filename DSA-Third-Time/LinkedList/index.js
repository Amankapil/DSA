let student = [
  {
    name: "aman",
    marks: 53,
  },
  {
    name: "kapi",
    marks: 513,
  },
  {
    name: "sa",
    marks: 10,
  },
];

const q5 = student
  .map((st) => {
    if (st.marks < 60) {
      st.marks += 20;
    }
  })
  .filter((st) => {
    return st.marks >= 60;
  });

console.log(q5);
