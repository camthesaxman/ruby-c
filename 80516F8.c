int __fastcall unref_sub_80516F8(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@3
  int v4; // r2@6
  int v5; // r4@7
  __int16 v6; // r0@14
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( gReceivedRemoteLinkPlayers )
  {
    if ( (unsigned __int8)GetMultiplayerId() )
    {
      if ( *((_WORD *)v2 + 4) == 10 )
        MenuPrint("ÊàÙÕçÙ", 3, 10);
      v6 = *((_WORD *)v2 + 4) + 1;
      *((_WORD *)v2 + 4) = v6;
      if ( v6 > 120 )
        *((_WORD *)v2 + 4) = 0;
      if ( (unsigned __int8)byte_3002A68 > 4u && gReceivedRemoteLinkPlayers == 1 )
        DestroyTask(v1);
    }
    else
    {
      v3 = *((_WORD *)v2 + 4) + 1;
      *((_WORD *)v2 + 4) = v3;
      if ( v3 > 120 )
        *((_WORD *)v2 + 4) = 0;
      if ( *((_WORD *)v2 + 4) == 100 )
      {
        ZeroFillWindowRect(dword_3004854 + 4, 0, 0, 0x10u, 0x14u);
        MenuDrawTextWindow(4, 4, 10, 12);
        v4 = 0;
        do
        {
          v5 = v4 + 1;
          if ( dword_3002974[7 * (v4 + 1)] )
            MenuPrint(gUnknown_08216284[v4], 5, (unsigned int)((v4 << 25) + 83886080) >> 24);
          MenuDrawTextWindow(0, 13, 29, 19);
          MenuPrint("ÊæÙçç", 1, 15);
          v4 = v5;
        }
        while ( v5 <= 2 );
      }
      if ( word_300179E & 1 )
      {
        sub_8007E4C();
        DestroyTask(v1);
      }
    }
  }
  return v8;
}
