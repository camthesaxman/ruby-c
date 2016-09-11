signed int __fastcall sub_80C962C(int a1, __int16 a2, __int16 a3)
{
  __int16 v3; // r3@1
  int v4; // r4@1
  int v5; // r2@1
  int v6; // r1@1
  int v7; // r6@2
  int v8; // r3@2
  signed int result; // r0@7

  v3 = a2;
  LOWORD(v4) = a3;
  v5 = *(_BYTE *)(a1 + 3);
  v6 = 0;
  if ( v5 <= 0 )
    goto _080C9680;
  v7 = v3;
  v4 = (signed __int16)v4;
  v8 = *(_DWORD *)(a1 + 16);
  while ( *(_BYTE *)(v8 + 5) != 7 || v7 != *(_WORD *)v8 || v4 != *(_WORD *)(v8 + 2) )
  {
    v8 += 12;
    if ( ++v6 >= v5 )
      goto _080C9680;
  }
  if ( FlagGet(*(_WORD *)(v8 + 10) + 600) << 24 )
_080C9680:
    result = 0;
  else
    result = 1;
  return result;
}
