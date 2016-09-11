int sub_805123C()
{
  __int16 v0; // r1@3
  signed int v1; // r0@6
  int *v2; // r2@9
  int v3; // r0@10
  __int16 *v4; // r0@11
  int v5; // r1@16
  unsigned int i; // r4@18
  unsigned int v7; // r2@19
  signed int v8; // r1@20
  signed int v9; // r0@22
  unsigned int j; // r4@29
  unsigned int k; // r4@34
  int v13; // [sp+Ch] [bp-4h]@0

  if ( !gReceivedRemoteLinkPlayers )
    return v13;
  if ( gRecvCmds[0] != 12287 )
    goto _080512C6;
  v0 = word_3002A28[0];
  if ( word_3002A28[0] == 4369 )
  {
    if ( (unsigned __int16)word_3002A30[0] == 39321
      || ((signed int)(unsigned __int16)word_3002A30[0] > 39321 ? (v1 = 43690) : (v1 = 34952),
          (unsigned __int16)word_3002A30[0] == v1) )
    {
      v2 = &dword_3004854;
      v3 = dword_3004854;
      *(_WORD *)(dword_3004854 + 120) = word_3002A30[0];
      *(_WORD *)(v3 + 122) = unk_3002A38;
    }
    else
    {
      v2 = &dword_3004854;
    }
    v4 = (__int16 *)(*v2 + 112);
    v0 = 4369;
  }
  else
  {
    if ( word_3002A28[0] != 8738 )
      goto _080512C6;
    v4 = (__int16 *)(dword_3004854 + 112);
  }
  *v4 = v0;
_080512C6:
  if ( GetMultiplayerId() << 24 )
    return v13;
  v5 = *(_WORD *)(dword_3004854 + 112);
  if ( v5 == 4369 || v5 == 8738 )
    return v13;
  for ( i = 0; i < (unsigned __int8)GetLinkPlayerCount(); i = (i + 1) & 0xFF )
  {
    v7 = i;
    if ( gRecvCmds[i] != 12287 )
      continue;
    v8 = (unsigned __int16)word_3002A28[v7];
    if ( v8 != 34952 )
    {
      if ( v8 <= 34952 )
      {
        v9 = 30585;
        goto _0805133C;
      }
      if ( v8 != 39321 )
      {
        v9 = 43690;
_0805133C:
        if ( v8 != v9 )
          continue;
        goto _08051340;
      }
    }
_08051340:
    *(_WORD *)(dword_3004854 + 112 + v7 * 2) = v8;
  }
  for ( j = 0; j < (unsigned __int8)GetLinkPlayerCount() && *(_WORD *)(dword_3004854 + 112 + 2 * j); j = (j + 1) & 0xFF )
    ;
  if ( j == (unsigned __int8)GetLinkPlayerCount() )
  {
    for ( k = 0;
          k < (unsigned __int8)GetLinkPlayerCount() && *(_WORD *)(dword_3004854 + 112 + 2 * k) == 30585;
          k = (k + 1) & 0xFF )
    {
      ;
    }
    gSendCmd[0] = 12287;
    if ( k == (unsigned __int8)GetLinkPlayerCount() )
    {
      word_3002F92 = 8738;
    }
    else
    {
      word_3002F92 = 4369;
      word_3002F94 = *(_WORD *)(dword_3004854 + 112 + 2 * k);
      word_3002F96 = k;
    }
  }
  return v13;
}
