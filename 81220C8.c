signed int sub_81220C8()
{
  signed int result; // r0@3
  int v1; // r5@6
  unsigned __int8 v2; // r1@7
  unsigned int v3; // r5@7
  unsigned __int8 v4; // r10@7
  int v5; // r4@8
  int v6; // r4@10

  if ( v201B263 )
  {
    if ( v2039272 )
    {
      v1 = 0;
      while ( 1 )
      {
        v201B282 = GetMonData((int)&unk_30042FC + 100 * *(_BYTE *)(v1 + 33788528), 11, (int)&unk_30042FC);
        v201B280 = GetMonData((int)&unk_30042FC + 100 * *(_BYTE *)(v1 + 33788528), 12, (int)&unk_30042FC);
        v2 = v1 + 1;
        v3 = (v1 + 1) & 0xFF;
        v4 = v2;
        if ( v3 <= 2 )
          break;
_08122198:
        v1 = v4;
        if ( v4 > 1u )
          goto _081221A2;
      }
      while ( 1 )
      {
        v5 = v201B282;
        if ( v5 == GetMonData((int)&unk_30042FC + 100 * *(_BYTE *)(v3 + 33788528), 11, 100 * *(_BYTE *)(v3 + 33788528)) )
          return 18;
        if ( v201B280 )
        {
          v6 = v201B280;
          if ( v6 == GetMonData((int)&unk_30042FC + 100 * *(_BYTE *)(v3 + 33788528), 12, 0) )
            break;
        }
        v3 = (v3 + 1) & 0xFF;
        if ( v3 > 2 )
          goto _08122198;
      }
      result = 19;
    }
    else
    {
      result = 17;
    }
  }
  else
  {
_081221A2:
    result = 255;
  }
  return result;
}
