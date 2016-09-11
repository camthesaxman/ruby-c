int sub_80BEC40()
{
  int v0; // r1@1
  int v1; // r2@2
  unsigned __int8 v2; // r5@2
  unsigned int v3; // r1@3
  int v5; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 4 * v0;
    v2 = v0 + 1;
    if ( !*(_BYTE *)(4 * v0 + 0x20281F0) )
    {
      v3 = (unsigned __int8)(v0 + 1);
      if ( v2 <= 0xFu )
      {
        while ( !*(_BYTE *)(4 * v3 + 0x20281F0) )
        {
          v3 = (v3 + 1) & 0xFF;
          if ( v3 > 0xF )
            goto _080BEC92;
        }
        *(_DWORD *)(v1 + 33718768) = *(_DWORD *)(4 * v3 + 0x20281F0);
        sub_80BEC10(v3);
      }
    }
_080BEC92:
    v0 = v2;
  }
  while ( v2 <= 0xEu );
  return v5;
}
