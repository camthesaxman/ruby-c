int __fastcall sub_80C8E1C(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v3; // r7@1
  int *v4; // r4@1
  int *v5; // r1@9
  char *v6; // r2@9
  signed int v7; // r3@9
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = 10 * a1;
  v4 = &dword_3004B20[v3];
  if ( !LOWORD(dword_3004B20[v3 + 2]) )
  {
    gBlockSendBuffer = 100;
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
      v5 = gBlockRecvBuffer;
      v6 = (char *)&unk_3004B32 + v3 * 4;
      v7 = 3;
      do
      {
        *(_WORD *)v6 = *(_WORD *)v5;
        v5 += 64;
        v6 += 2;
        --v7;
      }
      while ( v7 >= 0 );
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
