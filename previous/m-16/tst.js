function selectButton(txt) {
  const allbuttons = document.getElementsByTagName("button");
  for (let btn of allbuttons) {
    if (btn.innerText.toLowerCase() == txt.toLowerCase()) {
      return btn;
    }
  }
}

function handleAssignmentSkip() {
  const assignmentSkip = document.querySelector(
    "button.mt-2.btn.btn-outline-primary.custom-modal-button.btn.btn-md"
  );

  if (assignmentSkip) {
    assignmentSkip.click();

    setTimeout(() => {
      const okBtn = document.querySelector("button.btn.modal-ok-button");
      if (okBtn) okBtn.click();
    }, 1000);
  }
}

// Function to handle quiz and next button clicking
function handleQuizAndNext() {
  const quiz = selectButton("start quiz");
  if (quiz) quiz.click();
  document.getElementsByClassName("d-flex  align-items-center")[8].click();

  handleAssignmentSkip();

  const nextBtn = document.querySelector("button.btn.next-button");
  if (nextBtn) nextBtn.click();
}

// Set interval to run the function every 5000 milliseconds (5 seconds)
setInterval(handleQuizAndNext, 5000);
