int __fastcall sub_8119D08(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  char *v3; // r2@2
  int v5; // [sp+0h] [bp-Ch]@1
  int v6; // [sp+8h] [bp-4h]@4

  v1 = a1;
  memcpy(&v5, (const char *)&gUnknown_083FA64A, 2);
  v2 = *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 48) = v2 - 1;
  if ( v2 & 0x8000 )
  {
    *(_DWORD *)(v1 + 28) = sub_8119A90;
  }
  else
  {
    *(_WORD *)(v1 + 32) += 2 * *((_BYTE *)&v5 + *(_WORD *)(v2019038 + 46));
    v3 = &gSprites[68 * *(_WORD *)(v1 + 58) + 62];
    *v3 = *v3 & 0xFB | 4 * (((unsigned int)(unsigned __int8)*v3 << 29 >> 31) ^ 1);
  }
  return v6;
}
