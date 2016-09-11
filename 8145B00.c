int __fastcall sub_8145B00(int a1, int a2, int a3)
{
  unsigned int v3; // r10@1
  signed int v4; // r9@1
  unsigned int v5; // r6@1
  int v6; // r2@2
  unsigned __int16 v7; // r0@4
  unsigned int v8; // r0@4
  signed int v9; // r6@8
  unsigned int v10; // r5@9
  unsigned __int16 v11; // r8@9
  unsigned int *v12; // r4@10
  _BYTE *v13; // r2@10
  _BYTE *v14; // r2@11
  unsigned __int16 v15; // r0@12
  unsigned int v16; // r0@12
  int v18; // [sp+1Ch] [bp-4h]@0

  v202E8CC = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    if ( !GetMonData((int)&dword_3004360[25 * v5], 11, a3) )
      break;
    if ( !GetMonData((int)&dword_3004360[25 * v5], 45, v6) )
    {
      v7 = GetMonData((int)&dword_3004360[25 * v5], 1, a3);
      v8 = (unsigned __int8)sub_8145C8C(v202E8DC, v7);
      a3 = v202E8CC;
      if ( v8 > v202E8CC && v8 > 1 )
      {
        v202E8CC = v8 - 1;
        v4 = 14;
        v3 = v5;
      }
    }
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 5 );
  v9 = 0;
  do
  {
    v10 = 0;
    v11 = v9 + 1;
    do
    {
      v12 = (unsigned int *)(2400 * v9 + 80 * v10 + 33751204);
      if ( GetBoxMonData(v12, 11, (_BYTE *)(2400 * v9)) )
      {
        if ( !GetBoxMonData(v12, 45, v13) )
        {
          v15 = GetBoxMonData(v12, 1, v14);
          v16 = (unsigned __int8)sub_8145C8C(v202E8DC, v15);
          if ( v16 > v202E8CC && v16 > 1 )
          {
            v202E8CC = v16 - 1;
            v4 = v9;
            v3 = v10;
          }
        }
      }
      v10 = (v10 + 1) & 0xFFFF;
    }
    while ( v10 <= 0x1D );
    v9 = (unsigned __int16)(v9 + 1);
  }
  while ( v11 <= 0xDu );
  if ( v202E8CC )
  {
    v202E8CE = gUnknown_0840CB04[v202E8CC - 1];
    if ( v4 == 14 )
    {
      v202E8D0 = 0;
      GetMonData((int)&dword_3004360[25 * v3], 2, (int)gStringVar1);
    }
    else
    {
      v202E8D0 = 1;
      GetBoxMonData((unsigned int *)(2400 * v4 + 80 * v3 + 33751204), 2, gStringVar1);
    }
    StringGetEnd10((int)gStringVar1);
  }
  return v18;
}
