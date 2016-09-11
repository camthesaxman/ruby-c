int __fastcall sub_8004FD0(int a1, char *a2, int a3, __int16 a4, char a5, __int16 a6, char a7, int a8)
{
  int v8; // r10@1
  char *v9; // r5@1
  int v10; // r6@1
  int v11; // r7@1
  int v12; // r1@4
  signed int v13; // r0@6
  int v14; // r4@7
  signed int v15; // r8@10
  __int16 v17; // [sp+8h] [bp-30h]@1
  int v18; // [sp+14h] [bp-24h]@3

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v17 = a4;
  v11 = 0;
  if ( !a2 )
    v9 = &gStringVar4;
  v18 = (int)v9;
LABEL_9:
  v13 = 0;
LABEL_10:
  v15 = v13;
  while ( *(_BYTE *)v10 != 255 )
  {
    v12 = *(_BYTE *)v10;
    if ( v12 != 252 )
    {
      if ( v12 != 254 )
      {
        *v9++ = v12;
        ++v10;
        v13 = 1;
        goto LABEL_10;
      }
      *v9 = -4;
      v9[1] = 19;
      v9[2] = a7;
      v9[3] = -2;
      v9 += 4;
      ++v10;
      v11 = (v11 + 1) & 0xFF;
      goto LABEL_9;
    }
    v14 = (GetExtCtrlCodeLength(*(_BYTE *)(v10 + 1)) + 1) & 0xFF;
    memcpy(v9, v10, v14);
    v9 += v14;
    v10 += v14;
  }
  *v9 = -4;
  v9[1] = 19;
  v9[2] = a7;
  v9[3] = -1;
  if ( v15 )
    v11 = (v11 + 1) & 0xFF;
  sub_8002E4C(v8, v18, v17, a5, a6, a8);
  sub_8002F44(v8);
  return v11;
}
