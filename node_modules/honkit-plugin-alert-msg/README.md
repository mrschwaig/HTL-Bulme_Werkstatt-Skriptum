# honkit-plugin-alert-msg
Create alerts like [gitbook-plugin-flexible-alerts](https://github.com/fzankl/gitbook-plugin-flexible-alerts) using blocks of honkit.

## Usage
Simply create "alert" block in your markdown.
```md
{% alert type="note", style="callout" %}
This is a note.
{% endalert %}
```

This block is expanded into the following HTML by default.
```html
<div class="alert info callout">
    <p class="title">
        <i class="fa fa-info-circle"></i>
        "Note"
    </p>
    <p>This is a note.</p>
</div>
```

### Available `kwargs`
- `type`
  - `note`
  - `tip`
  - `warning`
  - `danger`
  - and you can add some custom type
- `style`
  - `callout`
  - `flat`

## Installation
### install this module
on project root
```bash
npm install honkit-plugin-alert-msg
```

### Add plugin in `book.json`
```json
{
    "plugins": [
        "alert-msg"
    ]
}
```

Now you can use `alert-msg` by `honkit build`, `honkit serve` and so on.

## Reference
- [gitbook-plugin-flexible-alerts](https://github.com/fzankl/gitbook-plugin-flexible-alerts)
- [gitbook-plugin-hints](https://github.com/GitbookIO/plugin-hints)

## Author
Nanamiiiii - Akihiro Saiki
- [Twitter](https://twitter.com/Nanamii_i)
