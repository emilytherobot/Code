function referee(){
    var training = {};
    function learn(winner,loser){
        if (!training[winner]) training[winner] = {};
        training[winner][loser]=1;
    }
    function judge(play1,play2){
        if (play1 === play2){ return 'tie'; }
        return ( (training[play1][play2] === 1)? play1: play2 )+' wins!';
    }
    function validate(choice) {
        return choice in training;
    }
    function choices() {
        return Object.keys(training);
    }
    return {
        'learn': learn,
        'judge': judge,
        'validAction': validate,
        'getChoices': choices
    };
}

var ref = referee();
ref.learn('rock','scissors');
ref.learn('paper','rock');
ref.learn('scissors','paper');

do {
    var userChoice = prompt("Do you choose rock, paper or scissors?");
} while(!ref.validAction(userChoice))
var choices = ref.getChoices(),
    computerChoice = choices[Math.floor(Math.random()*choices.length)];

console.log("User Choice: " + userChoice);
console.log("Computer Choice: " + computerChoice);
console.log(ref.judge(userChoice, computerChoice));