
# [projeto-semestral-TI]
## Sobre o Projeto
**Projeto:** [Tracker de Séries]
**Problema que resolve:** [Watchlist + TMDB → IA sugere próximo episódio e notifica lançamentos]
## Integrantes
| Nome | GitHub |
|------|--------|
| [ARTHUR DE ALMEIDA QUEIROZ] | [arthuralmeida2007-design] |
| [EDUARDO PIANCATELLI MARÇAL] | [eduardoPMarcal] |
| [lUCAS DA PAZ MARINHO | [lucasdpmarinho] |
## Arquitetura
```mermaid
flowchart TD
    A[Usuário acessa a aplicação] --> B[Adiciona nome de filme ou série]
    B --> C[Aplicação consulta API do TMDB]
    C --> D[Retorna filme ou série pesquisada]

    D --> E[Gemini analisa histórico e preferências]
    E --> F[Gemini sugere próximo filme ou série para assistir]

    F --> I[Usuário assiste episódio]
    I --> J[Atualiza progresso na Watchlist]

    J --> E

## Como funciona
Entrada: O usuario informa ao sistema o nome de um filme ou série que deseja assistir.
Processamento: O sistema utiliza a API TMDB para consultar o filme ou série solicitado, com o filme selecionado o sistema utiliza IA para atualizar um perfil do usuário para futuras recomendacões. Por fim é retornado o filme ao usuário.
Saída: Após assitir o filme ou série o sistema retorna à atualização do perfil de usuário atualizando com novos dados, sugerindo assim outros filmes e séries.
