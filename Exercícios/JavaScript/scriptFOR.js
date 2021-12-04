/*
break PARA A EXECUÇÃO DO BLOCO IMEDIATAMENTE

continue DIZ PARA IGNORAR OS PRÓXIMOS CODIGOS DO BLOCO E PASSAR PARA O PRÓXIMO

crase TEXTO

${} TEMPLATE STRING/PERMITE QUE VOCÊ PULE LINHA NUMA STRING

*/

const n = 9;
for (let i = 0; i <= 10; i++){

    //template string:
    console.log(`${i} x ${n} = ${i*n}`);

    //concatenação:
    console.log(i + ' x ' + n + ' = ' + (i*n));
}