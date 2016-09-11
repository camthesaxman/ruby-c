int __fastcall sub_80C8EBC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v1 + 4) )
  {
    if ( !(sub_8007ECC() << 24) )
      return v3;
    sub_80C857C((const char *)0x2038670, 8u);
_080C8F1C:
    ++*((_WORD *)v1 + 4);
    return v3;
  }
  if ( *((_WORD *)v1 + 4) == 1 )
  {
    if ( !(sub_80C85D8() << 24) )
      return v3;
    memcpy(33785456, (const char *)&gBlockRecvBuffer[64 * v203869B], 8);
    goto _080C8F1C;
  }
  *((_WORD *)v1 + 4) = 0;
  SwitchTaskToFollowupFunc(a1);
  return v3;
}
