int __fastcall sub_8127F7C(int a1)
{
  int v1; // r6@1
  int *v2; // r4@1
  char *v3; // r5@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * *(_WORD *)(a1 + 50)];
  v3 = &gSprites[68 * *((_BYTE *)v2 + 4)];
  sub_8127FD4(v2, a1);
  sub_812800C(v2, v1);
  sub_81280A0(v2, v3, v1);
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | v3[5] & 0xC;
  return v5;
}
