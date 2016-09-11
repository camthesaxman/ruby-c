int __fastcall unref_sub_8055A9C(int a1)
{
  _BYTE *v1; // r5@1
  int *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = (_BYTE *)((4 * a1 & 0x3FF) + 33724440);
  v2 = &dword_30048A0[9 * *(_BYTE *)((4 * a1 & 0x3FF) + 0x202981A)];
  v3 = *((_BYTE *)v2 + 4);
  if ( v3 != 64 )
    DestroySprite((int)&gSprites[68 * v3]);
  *v1 = 0;
  *(_BYTE *)v2 &= 0xFEu;
  return v5;
}
