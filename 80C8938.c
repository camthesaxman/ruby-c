int __fastcall sub_80C8938(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v3; // r7@1
  int *v4; // r4@1
  signed int v5; // r3@9
  int *v6; // r4@9
  _WORD *v7; // r2@9
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = 10 * a1;
  v4 = &dword_3004B20[v3];
  if ( !LOWORD(dword_3004B20[v3 + 2]) )
  {
    gBlockSendBuffer = *((_WORD *)v4 + 13);
    if ( !(GetMultiplayerId() << 24) )
    {
      if ( !(sub_8007ECC() << 24) )
        return v9;
      sub_8007E9C(2);
    }
    ++*((_WORD *)v4 + 4);
    return v9;
  }
  if ( LOWORD(dword_3004B20[v3 + 2]) == 1 )
  {
    if ( sub_80C85D8() << 24 )
    {
      v5 = 0;
      v6 = gBlockRecvBuffer;
      v7 = &byte_3004B28[v3 * 4 + 2];
      do
      {
        *v7 = *(_WORD *)v6;
        v6 += 64;
        ++v7;
        ++v5;
      }
      while ( v5 <= 3 );
      ++LOWORD(dword_3004B20[2 * (v2 + v1) + 2]);
    }
  }
  else
  {
    *((_WORD *)v4 + 4) = 0;
    SwitchTaskToFollowupFunc(a1);
  }
  return v9;
}
