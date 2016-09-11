signed int __fastcall sub_810038C(unsigned __int8 a1)
{
  _BYTE *v1; // r2@1
  __int16 v2; // r0@3
  __int16 v4; // r0@10

  v1 = &byte_3004B28[40 * a1];
  if ( v20391AA == 1 && *((_WORD *)v1 + 1) - (signed int)*((_WORD *)v1 + 6) - 6 < 0 )
  {
    v2 = *((_WORD *)v1 + 1) + 1;
_081003DE:
    *((_WORD *)v1 + 1) = v2;
    return 0;
  }
  if ( v20391AA == 2 && *((_WORD *)v1 + 1) - 7 >= *(_DWORD *)(v202E828 + 4) )
  {
    v2 = *((_WORD *)v1 + 1) - 1;
    goto _081003DE;
  }
  if ( v20391AA == 3 && *(_WORD *)v1 - 7 < 0 )
  {
    v4 = *(_WORD *)v1 + 1;
_0810041E:
    *(_WORD *)v1 = v4;
    return 0;
  }
  if ( v20391AA == 4 && *(_WORD *)v1 + (signed int)*((_WORD *)v1 + 5) - 8 >= *v202E828 )
  {
    v4 = *(_WORD *)v1 - 1;
    goto _0810041E;
  }
  return 1;
}
