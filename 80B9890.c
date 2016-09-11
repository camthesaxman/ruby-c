int __fastcall sub_80B9890(unsigned __int8 a1)
{
  int *v1; // r10@1
  unsigned int i; // r0@2
  int v3; // r8@3
  int *v4; // r4@4
  int v5; // r6@4
  int v6; // r1@4
  int v7; // r2@4
  int *v8; // r1@7
  __int16 v9; // r0@7
  unsigned int v10; // r9@10
  int *v11; // r0@11
  unsigned __int8 v13; // [sp+0h] [bp-30h]@1
  signed int v14; // [sp+4h] [bp-2Ch]@1
  int v15; // [sp+8h] [bp-28h]@1
  int v16; // [sp+2Ch] [bp-4h]@0

  v13 = a1;
  v1 = &dword_3004B20[10 * a1];
  v14 = (unsigned __int8)GetBlockRecievedStatus();
  v15 = 0;
  if ( v14 == (unsigned __int8)sub_8008198() )
  {
    for ( i = 0; ; i = (unsigned __int8)v3 )
    {
      v10 = i;
      if ( i >= (unsigned __int8)GetLinkPlayerCount() )
        break;
      v3 = v10 + 1;
      if ( (v14 >> v10) & 1 )
      {
        v4 = (int *)((char *)v1 + 2 * v3 + 8);
        v5 = sub_80B9A44((char *)v1 + 18) + 200 * *(_WORD *)v4 + 4656 * v10;
        v6 = sub_80B9A68(v10);
        v7 = *(_WORD *)v4;
        if ( (unsigned int)(200 * (v7 + 1)) <= 0x1230 )
          memcpy(v5, v6, 200);
        else
          memcpy(v5, v6, 4656 - 200 * v7);
        ResetBlockReceivedFlag(v10);
        v8 = (int *)((char *)v1 + 2 * v3 + 8);
        v9 = *(_WORD *)v8 + 1;
        *(_WORD *)v8 = v9;
        if ( v9 == 24 )
          v15 = (v15 + 1) & 0xFF;
      }
    }
    v11 = &dword_3004B20[10 * *((_WORD *)v1 + 4)];
    ++*((_WORD *)v11 + 4);
  }
  if ( v15 == (unsigned __int8)GetLinkPlayerCount() )
    DestroyTask(v13);
  return v16;
}
