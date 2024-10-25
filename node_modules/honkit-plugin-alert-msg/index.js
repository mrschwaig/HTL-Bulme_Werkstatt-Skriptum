/*
 * honkit-plugin-alert-msg
 * v0.0.1
 * (c) 2022 Nanamiiiii
 * MIT License
 */

let alertIcon = (type, props) => {
    let iconClass = props[type.toLowerCase()].icon;
    return '<i class="' + iconClass + '"></i>';
}

let alertTitle = (type, props) => {
    let titleLabel = props[type.toLowerCase()].label;
    return '<p class="title">' + alertIcon(type, props) + titleLabel + '</p>';
}

let classString = (type, props, style) => {
    return "alert " + style + " " + props[type.toLowerCase()].className; 
}

let alertBlock = (type, props, style, body) => {
    return '<div class="' + classString(type, props, style) + '">' + alertTitle(type, props) + '<p>' + body + '</p></div>';
}

module.exports = {
    website: {
        assets: "./assets",
        css: [
            "style.css"
        ]
    },

    ebook: {
        assets: "./assets",
        css: [
            "style.css"
        ]
    },

    blocks: {
        alert: {
            process: function (block) {
                let type = block.kwargs.type || 'note';
                let style = block.kwargs.style || 'callout';
                let props = this.config.get(["pluginsConfig", "alert-msg"]);
                return this
                    .renderBlock('markdown', block.body)
                    .then((renderedBody) => {
                        return alertBlock(type, props, style, renderedBody);
                    });
            }
        }
    }
}