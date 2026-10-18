# Windows 11 Cleaner + ML Dataset

Небольшой проект для безопасного анализа очистки Windows 11 и подготовки данных для машинного обучения.

## Windows
`windows-cleaner.ps1` очищает пользовательские и системные временные файлы и корзину. Prefetch намеренно не удаляется: Windows управляет им самостоятельно.

Запуск PowerShell:
```powershell
Set-ExecutionPolicy -Scope Process Bypass
.\windows-cleaner.ps1
```

Для системной Temp может потребоваться запуск PowerShell от имени администратора.

## Machine Learning
`ml/cleanup_dataset.csv` — стартовый датасет действий очистки. Его можно расширять результатами анализа: категория, путь, размер, возраст файла и безопасно ли удаление.

`ml/train.py` — простой пример обучения классификатора на CSV. Это учебная модель: решение об удалении системных файлов нельзя доверять только ML.

Установка:
```powershell
py -m pip install -r ml/requirements.txt
py ml/train.py
```
