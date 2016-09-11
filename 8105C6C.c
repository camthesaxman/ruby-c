int __fastcall sub_8105C6C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-1Ch]@1
  char v5; // [sp+8h] [bp-14h]@1
  int v6; // [sp+18h] [bp-4h]@5

  v1 = a1;
  memcpy(&v4, (const char *)&gUnknown_083ECC62, 8);
  memcpy(&v5, (const char *)&gUnknown_083ECC6A, 8);
  v2 = *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 48) = v2 + 1;
  if ( v2 > 15 )
  {
    *(_BYTE *)(v1 + 66) = *(_BYTE *)(v1 + 66) & 0xC0 | *(_BYTE *)(v1 + 66) & 0x3F ^ 1;
    *(_WORD *)(v1 + 48) = 0;
  }
  *(_WORD *)(v1 + 36) = 0;
  *(_WORD *)(v1 + 38) = 0;
  if ( *(_BYTE *)(v1 + 66) & 0x3F )
  {
    *(_WORD *)(v1 + 36) = *((_WORD *)&v4 + *(_WORD *)(v1 + 58));
    *(_WORD *)(v1 + 38) = *((_WORD *)&v5 + *(_WORD *)(v1 + 58));
  }
  return v6;
}
