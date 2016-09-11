int __fastcall maybe_shadow_1(int a1, int a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r4@1
  int v6; // r5@1
  char v7; // r0@1
  int v9; // [sp+Ch] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  sub_806113C(a1, a2, a3, a4, a5);
  v7 = get_go_image_anim_num(*(_BYTE *)(v5 + 24) & 0xF);
  sub_805FE28(v5, v6, v7);
  DoShadowFieldEffect(v5);
  return v9;
}
