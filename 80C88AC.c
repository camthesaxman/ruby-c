int __fastcall sub_80C88AC(unsigned __int8 a1)
{
  int *v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v1 + 4) )
  {
    if ( !(GetMultiplayerId() << 24) )
    {
      if ( !(sub_8007ECC() << 24) )
        return v3;
      sub_80C857C((const char *)&dword_3004818, 4u);
    }
_080C891E:
    ++*((_WORD *)v1 + 4);
    return v3;
  }
  if ( *((_WORD *)v1 + 4) == 1 )
  {
    if ( !(sub_80C85AC(0) << 24) )
      return v3;
    memcpy(&dword_3004818, (const char *)gBlockRecvBuffer, 4);
    memcpy(&dword_3005D28, (const char *)gBlockRecvBuffer, 4);
    goto _080C891E;
  }
  *((_WORD *)v1 + 4) = 0;
  SwitchTaskToFollowupFunc(a1);
  return v3;
}
