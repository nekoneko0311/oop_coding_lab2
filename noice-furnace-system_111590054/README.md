# Noice-Furnace-Table

## 實作必要目標

這份 Code 主要重現了之前在多型時描述的熔爐系統，它只能放入一種礦物，或者你可以嘗試使用多型的方式放入多種。

- 這個熔爐的最小要求是礦物放進去要具有 `Smelt()` 這個函式，並且回傳 `SmeltResult` 類別的物件。
- 你必須要使用介面的方式來讓放入的礦物能夠不僅一種。
- 你的熔爐系統必須要同時滿足放入礦物、燒礦物、拿出礦物、取得目前礦物數量。



## 其他有趣的 Approach

- 你可以嘗試實踐之前所說的 Dependency Injection，可以取決於放進去的礦物是什麼，來決定他的一些行為。
