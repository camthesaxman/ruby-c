int __fastcall sub_80C8A38(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int *v3; // r4@1
  int *v4; // r1@7
  _WORD *v5; // r3@7
  signed int v6; // r2@7
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v3 + 4) )
  {
    if ( *((_WORD *)v3 + 4) == 1 )
    {
      if ( sub_80C85D8() << 24 )
      {
        v4 = gBlockRecvBuffer;
        v5 = (_WORD *)33657446;
        v6 = 3;
        do
        {
          *v5 = *(_WORD *)v4;
          v4 += 64;
          v5 += 14;
          --v6;
        }
        while ( v6 >= 0 );
        ++LOWORD(dword_3004B20[2 * (v2 + v1) + 2]);
      }
    }
    else
    {
      *((_WORD *)v3 + 4) = 0;
      SwitchTaskToFollowupFunc(a1);
    }
  }
  else if ( sub_8007ECC() << 24 )
  {
    sub_80C857C((const char *)(28 * v2038695 + 33657446), 2u);
    ++*((_WORD *)v3 + 4);
  }
  return v8;
}
