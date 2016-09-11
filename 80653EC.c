signed int __fastcall sub_80653EC(int a1)
{
  int v1; // r4@1
  signed int result; // r0@2
  signed int v3; // r0@3
  int v4; // r0@8
  _BYTE *v5; // r2@14
  int v10; // r1@17
  _DWORD *v11; // r1@17

  v1 = a1;
  if ( !*(_BYTE *)(a1 + 1) )
    return 0;
  v3 = *(_BYTE *)(a1 + 1);
  if ( v3 == 1 )
    goto _08065432;
  if ( v3 <= 1 )
  {
    if ( !*(_BYTE *)(v1 + 1) )
      return 0;
    return 1;
  }
  if ( v3 != 2 )
    return 1;
  v4 = *(_DWORD *)(v1 + 4);
  if ( v4 )
  {
    if ( (unsigned __int8)call_via_r0(v4) == 1 )
      *(_BYTE *)(v1 + 1) = 1;
    return 1;
  }
  *(_BYTE *)(v1 + 1) = 1;
  while ( 1 )
  {
_08065432:
    v5 = *(_BYTE **)(v1 + 8);
    if ( !v5 )
    {
      *(_BYTE *)(v1 + 1) = 0;
      return 0;
    }
    if ( !v5 )
    {
      while ( 1 )
        __asm { SVC             2 }
    }
    v10 = *v5;
    *(_DWORD *)(v1 + 8) = v5 + 1;
    v11 = (_DWORD *)(*(_DWORD *)(v1 + 92) + 4 * v10);
    if ( (unsigned int)v11 >= *(_DWORD *)(v1 + 96) )
      break;
    if ( (unsigned __int8)call_via_r1(v1, *v11) == 1 )
      return 1;
  }
  result = 0;
  *(_BYTE *)(v1 + 1) = 0;
  return result;
}
