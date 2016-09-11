int __fastcall sub_8045D58(unsigned __int8 a1, int a2)
{
  int v2; // r6@1
  unsigned int v3; // r0@4
  int v4; // r8@4
  unsigned int v5; // r5@7
  int v6; // r6@7
  int v7; // r4@8
  char *v8; // r0@9
  char *v9; // r0@10
  int v10; // r2@13
  unsigned int v11; // r5@14
  unsigned int v12; // r5@16
  char *v13; // r0@18
  char *v14; // r0@19
  char v16; // [sp+8h] [bp-20h]@9
  int v17; // [sp+24h] [bp-4h]@21

  v2 = a1;
  a2 = (unsigned __int8)a2;
  if ( (_BYTE)a2 )
  {
    if ( a2 == 1 )
    {
      sub_804602C(
        *(_DWORD *)(20 * a1 + 0x2017854),
        *(_DWORD *)(20 * a1 + 0x2017858),
        *(_DWORD *)(20 * a1 + 0x201785C),
        20 * a1 + 33650784);
      if ( (unsigned __int8)GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2 + 0x2024A6A)], 56, v10) == 100 )
      {
        v11 = 0;
        do
        {
          *(&v16 + v11) = 0;
          v11 = (v11 + 1) & 0xFF;
        }
        while ( v11 <= 7 );
      }
      v12 = 0;
      do
      {
        if ( v12 > 3 )
        {
          v14 = sub_8043CDC(12);
          CpuSet(
            &v14[32 * (unsigned __int8)*(&v16 + v12)],
            32 * (v12 + (*(_WORD *)&gSprites[68 * *(_BYTE *)(20 * v2 + 0x2017850) + 4] & 0x3FF)) + 100731776,
            67108872);
        }
        else
        {
          v13 = sub_8043CDC(12);
          CpuSet(
            &v13[32 * (unsigned __int8)*(&v16 + v12)],
            32 * ((*(_WORD *)&gSprites[68 * *(_BYTE *)(20 * v2 + 0x2017850) + 4] & 0x3FF) + v12 + 36) + 100728832,
            67108872);
        }
        v12 = (v12 + 1) & 0xFF;
      }
      while ( v12 <= 7 );
    }
  }
  else
  {
    v3 = (unsigned __int8)sub_804602C(
                            *(_DWORD *)(20 * a1 + 0x2017854),
                            *(_DWORD *)(20 * a1 + 0x2017858),
                            *(_DWORD *)(20 * a1 + 0x201785C),
                            20 * a1 + 33650784);
    v4 = 3;
    if ( v3 <= 0x18 )
    {
      v4 = 56;
      if ( v3 > 9 )
        v4 = 47;
    }
    v5 = 0;
    v6 = 20 * v2;
    do
    {
      v7 = *(_WORD *)&gSprites[68 * *(_BYTE *)(v6 + 33650768) + 56] & 0xFF;
      if ( v5 > 1 )
      {
        v9 = sub_8043CDC(v4);
        CpuSet(
          &v9[32 * (unsigned __int8)*(&v16 + v5)],
          32 * (v5 + (*(_WORD *)&gSprites[68 * v7 + 4] & 0x3FF)) + 100728896,
          67108872);
      }
      else
      {
        v8 = sub_8043CDC(v4);
        CpuSet(
          &v8[32 * (unsigned __int8)*(&v16 + v5)],
          32 * ((*(_WORD *)&gSprites[68 * v7 + 4] & 0x3FF) + v5 + 2) + 100728832,
          67108872);
      }
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 <= 5 );
  }
  return v17;
}
