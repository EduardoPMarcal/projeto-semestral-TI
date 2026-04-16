
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
    A[Usuário acessa a aplicação] --> B[Adiciona séries à Watchlist]
    B --> C[Aplicação consulta API do TMDB]
    C --> D[Obtém dados de episódios e lançamentos]

    D --> E[IA analisa histórico e preferências]
    E --> F[IA sugere próximo episódio para assistir]

    D --> G[Verifica novos episódios lançados]
    G --> H[Sistema envia notificação ao usuário]

    F --> I[Usuário assiste episódio]
    I --> J[Atualiza progresso na Watchlist]

    J --> E
