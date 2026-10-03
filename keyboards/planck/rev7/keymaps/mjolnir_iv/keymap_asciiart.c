const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Layer 0: Base Layer (Colemak-DH variant with Tap Dance E)
     * ,-----------------------------------------------------------------------------------.
     * | LT5ESC|  SCLN |  COMM |  DOT  |   P   |   Y   |   F   |   G   |   C   |   R   |   L   |  QUOT |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |  TAB  |   A   |   O   | TD(E) |   U   |   I   |   D   |   H   |   T   |   N   |   S   |  ENT  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | Shift |   Z   |   Q   |   J   |   K   |   X   |   B   |   M   |   W   |   V   |  SLSH | Enter |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | MO(7) | Ctrl  |  Alt  |  GUI  | MO(3) |     Space     | MO(4) |  Left |  Down |   Up  | Right |
     * `-----------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_ortho_4x12(
        LT(5,KC_ESC), KC_SCLN, KC_COMM, KC_DOT, KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_QUOT,
        KC_TAB,       KC_A,    KC_O,    TD(TD_E_ACCENT), KC_U, KC_I, KC_D, KC_H, KC_T,    KC_N,    KC_S,    KC_ENT,
        KC_LSFT,      KC_Z,    KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_SLSH, KC_RSFT,
        MO(7),        KC_LCTL, KC_LALT, KC_LGUI, MO(3),   KC_SPC,  KC_BSPC, MO(4),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    /*
     * Layer 1: Alternate Layout Base
     * ,-----------------------------------------------------------------------------------.
     * | LT5ESC|  SCLN |  COMM |  DOT  |   P   |   Y   |   F   |   G   |   C   |   R   |   L   |  QUOT |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |  TAB  |   A   |   O   |   E   |   U   |   I   |   D   |   H   |   T   |   N   |   S   |  ENT  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | Shift |   Z   |   Q   |   J   |   K   |   X   |   B   |   M   |   W   |   V   |  SLSH | Enter |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | MO(7) |  GUI  |  Alt  | Ctrl  | MO(8) |     Space     | MO(9) |  Left |  Down |   Up  | Right |
     * `-----------------------------------------------------------------------------------'
     */
    [1] = LAYOUT_ortho_4x12(
        LT(5,KC_ESC), KC_SCLN, KC_COMM, KC_DOT, KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_QUOT,
        KC_TAB,       KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
        KC_LSFT,      KC_Z,    KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_SLSH, KC_RSFT,
        MO(7),        KC_LGUI, KC_LALT, KC_LCTL, MO(8),   KC_SPC,  KC_BSPC, MO(9),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    /*
     * Layer 2: QWERTY Base Layout
     * ,-----------------------------------------------------------------------------------.
     * | LT5ESC|   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |  QUOT |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |  TAB  |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |  SCLN |  ENT  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | Shift |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |  COMM |  DOT  |  SLSH | Enter |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | MO(7) | Ctrl  |  Alt  |  GUI  | MO(3) |     Space     | MO(4) |  Left |  Down |   Up  | Right |
     * `-----------------------------------------------------------------------------------'
     */
    [2] = LAYOUT_ortho_4x12(
        LT(5,KC_ESC), KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
        KC_TAB,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT,      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        MO(7),        KC_LCTL, KC_LALT, KC_LGUI, MO(3),   KC_SPC,  KC_BSPC, MO(4),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    /*
     * Layer 3: Function & Navigation / Symbols
     * ,-----------------------------------------------------------------------------------.
     * |  F12  |   F2  |   F3  |   F4  | KC_NO | KC_NO | KC_NO |  LPRN |  RPRN | KC_NO | KC_NO |RCS(GRV|
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |SFT(F12| LCA(K)| RCS(2)| RCS(F)|LCT(F) | LCA(F)| LCA(G)|  LBRC |  RBRC | KC_NO | KC_NO | KC_NO |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | LCA(J)| LCA(L)| LCT(C)| LCT(V)| LCA(P)| LCA(Y)|  LCBR |  RCBR | KC_NO |  BSLS | TRNS  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | TRNS  | TRNS  |  GUI  | TRNS  |    RAG(J)     | MO(6) |  Home |  PgDn |  PgUp |  End  |
     * `-----------------------------------------------------------------------------------'
     */
    [3] = LAYOUT_ortho_4x12(
        KC_F12,    KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN, KC_NO,   KC_NO,   RCS(KC_GRV),
        LSFT(KC_F12),LCA(KC_K),RCS(KC_2),RCS(KC_F),LCTL(KC_F),LCA(KC_F),LCA(KC_G),KC_LBRC,KC_RBRC,KC_NO,KC_NO,KC_NO,
        KC_TRNS,   LCA(KC_J),LCA(KC_L),LCTL(KC_C),LCTL(KC_V),LCA(KC_P),LCA(KC_Y),KC_LCBR,KC_RCBR,KC_NO,KC_BSLS,KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_LGUI, KC_TRNS, RAG(KC_J),RCS(KC_K),MO(6), KC_HOME, KC_PGDN, KC_PGUP, KC_END
    ),

    /*
     * Layer 4: Numbers & Special Characters
     * ,-----------------------------------------------------------------------------------.
     * |  GRV  |  EXLM |   AT  |  HASH |  DLR  |  PERC |  CIRC |  AMPR |  ASTR | LCT(T)| RCS(O)| LCT(P)|
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |LCA(TAB| GUI(1)| GUI(2)| RCS(P9| RCS(P3| GUI(8)| GUI(9)|  UNDS |  MINS |  EQL  |  PLUS |   F1  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |  CAPS | GUI(3)| GUI(4)| GUI(5)| GUI(6)| GUI(7)| RCTL  | LCT(GRV| RCS(U)| RCS(M)| RCS(Y)| TRNS  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | TRNS  | TRNS  | TRNS  | MO(6) |     TRNS      |  Del  | TRNS  | RCS(E)|RCS(QUO| RCS(D)|LCA(QUO|
     * `-----------------------------------------------------------------------------------'
     */
    [4] = LAYOUT_ortho_4x12(
        KC_GRV,    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, LCTL(KC_T),RCS(KC_O),LCTL(KC_P),
        LCA(KC_TAB),LGUI(1), LGUI(2), RCS(KC_P9),RCS(KC_P3),LGUI(8),LGUI(9),KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_F1,
        KC_CAPS,   LGUI(3), LGUI(4), LGUI(5), LGUI(6), LGUI(7), KC_RCTL, LCTL(KC_GRV),RCS(KC_U),RCS(KC_M),RCS(KC_Y),KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, MO(6),   KC_TRNS, KC_DEL,  KC_TRNS, RCS(KC_E),RCS(KC_QUOT),RCS(KC_D),LCA(KC_QUOT)
    ),

    /*
     * Layer 5: Extended Function / Numpad block
     * ,-----------------------------------------------------------------------------------.
     * | TRNS  |  F10  |  F11  |SFT(F11|   F5  | RCS(F5| KC_NO |   P7  |   P8  |   P9  | KC_NO | KC_NO |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  |   F6  |   F7  |   F8  |   F9  | KC_NO | KC_NO |   P4  |   P5  |   P6  |  MINS | KC_NO |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | KC_NO | KC_NO | KC_NO | KC_NO | KC_NO | KC_NO |   P1  |   P2  |   P3  |  SLSH | KC_NO |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | TRNS  | TRNS  | TRNS  | TRNS  |      Space    |  BSPC |   P0  |  PDOT | KC_NO | KC_NO |  NUM  |
     * `-----------------------------------------------------------------------------------'
     */
    [5] = LAYOUT_ortho_4x12(
        KC_TRNS,   KC_F10,  KC_F11,  LSFT(KC_F11),KC_F5,RCS(KC_F5),KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_NO,   KC_NO,
        KC_TRNS,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_NO,   KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_MINS, KC_NO,
        KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_SLSH, KC_NO,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC,  KC_BSPC, KC_P0,   KC_PDOT, KC_NO,   KC_NO,   KC_NUM
    ),

    /*
     * Layer 6: Configuration & RGB / Bootloader
     * ,-----------------------------------------------------------------------------------.
     * | TRNS  | QK_BOT| DB_TOG| UG_TOG| UG_NXT| UG_HUE| UG_HUD| UG_SAT| UG_SAD| UG_VAL| UG_VAD|  Del  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | KC_NO | KC_NO | KC_NO | KC_NO | KC_NO | KC_NO | DF(0) | DF(1) | DF(2) | TRNS  | TRNS  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | RGB_MP| RGB_MB| RGB_MR|RGB_MSW|RGB_MSN|RGB_MK |RGB_MX | RGB_MG| KC_NO | KC_NO | TRNS  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | TRNS  | TRNS  | TRNS  | TRNS  |     TRNS      | TRNS  | TRNS  | TRNS  | TRNS  | TRNS  |
     * `-----------------------------------------------------------------------------------'
     */
    [6] = LAYOUT_ortho_4x12(
        KC_TRNS,   QK_BOOT, DB_TOGG, UG_TOGG, UG_NEXT, UG_HUEU, UG_HUED, UG_SATU, UG_SATD, UG_VALU, UG_VALD, KC_DEL,
        KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   DF(0),   DF(1),   DF(2),   KC_TRNS, KC_TRNS,
        KC_TRNS,   RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,RGB_M_SN,RGB_M_K, RGB_M_X, RGB_M_G, KC_NO,   KC_NO,   KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /*
     * Layer 7: Media, Brightness & Mouse Controls
     * ,-----------------------------------------------------------------------------------.
     * | KC_NO | BRID  | BRIU  | KC_NO | KC_NO |  MPRV |  MPLY |  MNXT |  MUTE |  VOLD |  VOLU | KC_NO |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |LSG(4) | KC_NO | KC_NO | KC_NO | KC_NO | KC_NO | KC_NO |MS_LEFT|MS_DOWN| MS_UP |MS_RGHT| KC_NO |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | PSCR  |MS_BTN3|MS_BTN2|MS_BTN1| KC_NO | KC_NO | KC_NO | KC_NO |MS_WHLL|MS_WHLD|MS_WHLU|MS_WHLR|
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  |MS_ACL0|MS_ACL1|MS_ACL2| KC_NO |     KC_NO     | KC_NO |MS_LEFT|MS_DOWN| MS_UP |MS_RGHT|
     * `-----------------------------------------------------------------------------------'
     */
    [7] = LAYOUT_ortho_4x12(
        KC_NO,     KC_BRID, KC_BRIU, KC_NO,   KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,
        LSG(KC_4), KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, KC_NO,
        KC_PSCR,   MS_BTN3, MS_BTN2, MS_BTN1, KC_NO,   KC_NO,   KC_NO,   KC_NO,   MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR,
        KC_TRNS,   MS_ACL0, MS_ACL1, MS_ACL2, KC_NO,   KC_NO,   KC_NO,   KC_NO,   MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT
    ),

    /*
     * Layer 8: Alternate Functions / Secondary Nav
     * ,-----------------------------------------------------------------------------------.
     * |  F12  |   F2  |   F3  |   F4  | KC_NO | KC_NO | KC_NO |  LPRN |  RPRN | KC_NO | KC_NO |RCS(GRV|
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |SFT(F12| LCA(K)| RCS(2)| RCS(F)| GUI(F)| LCA(F)| LCA(G)|  LBRC |  RBRC | KC_NO | KC_NO | KC_NO |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | LCA(J)| LCA(L)| GUI(C)| GUI(V)| LCA(P)| LCA(Y)|  LCBR |  RCBR | KC_NO |  BSLS | TRNS  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | TRNS  | TRNS  | TRNS  | TRNS  |     RAG(J)    | MO(6) |  Home |  PgDn |  PgUp |  End  |
     * `-----------------------------------------------------------------------------------'
     */
    [8] = LAYOUT_ortho_4x12(
        KC_F12,    KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN, KC_NO,   KC_NO,   RCS(KC_GRV),
        LSFT(KC_F12),LCA(KC_K),RCS(KC_2),RCS(KC_F),LGUI(KC_F),LCA(KC_F),LCA(KC_G),KC_LBRC,KC_RBRC,KC_NO,KC_NO,KC_NO,
        KC_TRNS,   LCA(KC_J),LCA(KC_L),LGUI(KC_C),LGUI(KC_V),LCA(KC_P),LCA(KC_Y),KC_LCBR,KC_RCBR,KC_NO,KC_BSLS,KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RAG(KC_J),RCS(KC_K),MO(6), KC_HOME, KC_PGDN, KC_PGUP, KC_END
    ),

    /*
     * Layer 9: Alternate Symbols / Shortcuts
     * ,-----------------------------------------------------------------------------------.
     * |  GRV  |  EXLM |   AT  |  HASH |  DLR  |  PERC |  CIRC |  AMPR |  ASTR | LCT(T)| RCS(O)| LCT(P)|
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |LCA(TAB| GUI(1)| GUI(2)| RCS(P9| RCS(P3| GUI(8)| GUI(9)|  UNDS |  MINS |  EQL  |  PLUS |   F1  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * |  CAPS | GUI(3)| GUI(4)| GUI(5)| GUI(6)| GUI(7)| RCTL  | LCT(GRV| RCS(U)| RCS(M)| RCS(Y)| TRNS  |
     * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
     * | TRNS  | TRNS  | TRNS  | TRNS  | MO(6) |     TRNS      |  Del  | TRNS  | RCS(E)|RCS(QUO| RCS(D)|LCA(QUO|
     * `-----------------------------------------------------------------------------------'
     */
    [9] = LAYOUT_ortho_4x12(
        KC_GRV,    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, LCTL(KC_T),RCS(KC_O),LCTL(KC_P),
        LCA(KC_TAB),LGUI(1), LGUI(2), RCS(KC_P9),RCS(KC_P3),LGUI(8),LGUI(9),KC_UNDS, KC_MINS, KC_EQL,  KC_PLUS, KC_F1,
        KC_CAPS,   LGUI(3), LGUI(4), LGUI(5), LGUI(6), LGUI(7), KC_RCTL, LCTL(KC_GRV),RCS(KC_U),RCS(KC_M),RCS(KC_Y),KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, MO(6),   KC_TRNS, KC_DEL,  KC_TRNS, RCS(KC_E),RCS(KC_QUOT),RCS(KC_D),LCA(KC_QUOT)
    )
};
