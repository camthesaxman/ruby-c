int __fastcall sub_810B18C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@5
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( HIWORD(dword_3004B20[10 * *(_WORD *)(a1 + 46) + 4]) )
  {
    if ( ((*(_WORD *)(a1 + 48) - 60) & 0xFFFFu) <= 0x1D )
      *(_WORD *)(a1 + 48) += 5;
    if ( (signed int)*(_WORD *)(a1 + 48) <= 59 )
    {
      v2 = *(_WORD *)(a1 + 48) + 1;
_0810B1EA:
      *(_WORD *)(v1 + 48) = v2;
      goto _0810B1EC;
    }
  }
  else
  {
    if ( ((*(_WORD *)(a1 + 48) - 46) & 0xFFFFu) <= 0x1D )
      *(_WORD *)(a1 + 48) -= 5;
    if ( (signed int)*(_WORD *)(a1 + 48) > 75 )
    {
      v2 = *(_WORD *)(a1 + 48) - 1;
      goto _0810B1EA;
    }
  }
_0810B1EC:
  *(_WORD *)(v1 + 36) = 30 * (signed __int16)cosine2(*(_WORD *)(v1 + 48)) / 4096;
  *(_WORD *)(v1 + 38) = 30 * (signed __int16)sine2(*(_WORD *)(v1 + 48)) / 4096;
  return v4;
}
