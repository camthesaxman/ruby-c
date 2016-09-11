int __fastcall sub_8060ED8(int a1, int a2, char a3)
{
  int v3; // r4@1
  int v4; // r5@1
  char v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  sub_8060E68(a1, a2, a3);
  v5 = get_go_image_anim_num(*(_BYTE *)(v3 + 24) & 0xF);
  sub_805FE28(v3, v4, v5);
  return v7;
}
