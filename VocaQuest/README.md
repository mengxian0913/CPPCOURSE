# C++ 專案一： 英文單字測驗系統

#### 說明連結: https://hackmd.io/@Rg768bL8QoqUb_aJOh2nRQ/H14yCcgzkx

---

## 專案概述

開發一個基於終端機介面的英文單字測驗系統，實現單字卡的管理和測驗功能。本專案旨在幫助學生實踐 C++ 程式設計的基本概念，包括檔案操作、資料結構使用、函式設計等。

## 技術需求

- 程式語言： C++
- 開發環境： 支援 C++11 或以上的編譯器
- 基礎知識：
  - 檔案讀寫操作
  - 系統流程設計
  - STL 容器使用
  - 函式設計
  - 基本的錯誤處理

## 系統架構

系統分為三個主要部分：

1. 使用者介面：使用終端機的標準輸入輸出
2. 資料儲存：使用文字檔案作為簡易資料庫
3. 程式邏輯：處理核心功能的 C++ 程式碼

## 資料儲存格式

系統使用 `vocData.txt` 作為資料儲存檔案，採用以下格式：

```txt
vocabulary   詞彙
apple        蘋果
banana       香蕉
human        人類
history      歷史
probably     可能
```

---

## 功能需求

### 1 資料檔案建立與存取

- 目標：建立並讀取 vocData.txt 檔案
- 要求：
  - 程式啟動時自懂檢查檔案是否存在
  - 如果檔案不存在，則建立新檔案 `vocData.txt`
  - 正確處理讀取檔案時可能發生的錯誤

---

### 2. 資料讀取與儲存設計

- 目標：實現資料的讀取與儲存機制
- 要求：
  - 設計適當的資料結構儲存單字卡資料（建議使用 STL 容器）
  - 實現檔案讀取函式
  - 設計資料儲存格式（英文作為 Key，中文作為 Value）

---

### 3. 主選單功能

- 目標：實現使用者互動介面
- 要求：
  - 設計選單介面，包含以下選項：
  ```txt
  1. 新增單字卡片
  2. 刪除單字卡片
  3. 查詢單字卡片
  4. 開始考試
  5. 結束程式（保存資料｜退出）
  ```

---

### 4. 新增單字卡功能

- 目標：實現新增單字卡的功能
- 要求：
  - 設計新增單字的函式
  - 提供清晰的使用者輸入提示
  - 驗證輸入資料的有效性
  - 處理重複單字的情況

---

### 5. 刪除單字卡功能

- 目標：實現刪除單字卡的功能
- 要求：
  - 設計刪除單字的函式
  - 根據英文單字進行刪除
  - 處理找不到單字的情況
  - 提供操作確認機制

---

### 6. 測驗功能

- 目標：實現單字測驗功能
- 要求：
  - 設計測驗函式
  - 允許使用者指定測驗題數
  - 檢查題數是否超過現有單字數量
  - 實現隨機選題機制
  - 計算並顯示測驗成績

---

### 7. 程式結束功能

- 目標：實現安全的程式結束機制
- 要求：
  - 設計程式結束函式
  - 提供退出確認提示
  - 儲存資料至檔案
  - 安全關閉程式