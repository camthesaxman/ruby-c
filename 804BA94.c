int __fastcall sub_804BA94(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v3; // r9@1
  int v4; // r4@1
  unsigned int *v5; // r7@1
  int v6; // r6@1
  char *v7; // r5@1
  int v8; // r2@1
  int v9; // r8@1
  int v10; // r2@3
  int v11; // r1@3
  int v12; // r2@3
  char v14; // [sp+0h] [bp-20h]@3
  int v15; // [sp+1Ch] [bp-4h]@9

  v3 = a1;
  v4 = a2;
  v5 = &dword_3004360[25 * a1];
  v6 = (unsigned __int16)GetMonData((int)v5, 64, a3);
  v7 = (char *)&unk_30045C0 + 100 * v4;
  v9 = (unsigned __int16)GetMonData((int)v7, 64, v8);
  if ( v6 != 255 )
    sub_80A2B40(36 * v6 + 33718912);
  memcpy(dword_3004828 + 56, v5, 100);
  memcpy(v5, v7, 100);
  memcpy(v7, dword_3004828 + 56, 100);
  v14 = 70;
  if ( !GetMonData((int)v5, 45, v10) )
    SetMonData((int)v5, 32, (int)&v14);
  if ( v9 != 255 )
    sub_80A2D88(v5, 36 * v9 + 33724160);
  sub_804BA18(v3, v11, v12);
  if ( gReceivedRemoteLinkPlayers )
    sub_804BA64();
  return v15;
}
