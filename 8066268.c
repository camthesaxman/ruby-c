signed int __fastcall s97_screen_special_effect(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r1@1
  int v3; // r0@1

  v1 = a1;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = *v2;
  *(_DWORD *)(v1 + 8) = v2 + 1;
  fade_screen(v3, 0);
  script_setup_asm_script(v1, (int)sub_8066248);
  return 1;
}
