int __fastcall reads_trainer_data_byte0(unsigned __int16 a1, unsigned __int8 a2)
{
  unsigned int v2; // r4@1
  int v3; // r1@1
  int v4; // r3@3
  signed int v5; // r0@3
  int v6; // r1@10
  unsigned int l; // r2@10
  int v8; // r1@13
  unsigned int i; // r2@13
  int v10; // r1@16
  unsigned int j; // r2@16
  int v12; // r1@19
  unsigned int k; // r2@19

  v2 = a2;
  v3 = 40 * a1;
  if ( *((_BYTE *)&gTrainers + v3 + 32) < v2 )
    v2 = *((_BYTE *)&gTrainers + v3 + 32);
  v4 = 0;
  v5 = *((_BYTE *)&gTrainers + v3);
  if ( v5 == 1 )
  {
    v8 = *(_DWORD *)((char *)&unk_81F0520 + v3);
    for ( i = 0; i < v2; i = (i + 1) & 0xFF )
      v4 = (v4 + *(_BYTE *)(16 * i + v8 + 2)) & 0xFF;
  }
  else if ( v5 > 1 )
  {
    if ( v5 == 2 )
    {
      v10 = *(_DWORD *)((char *)&unk_81F0520 + v3);
      for ( j = 0; j < v2; j = (j + 1) & 0xFF )
        v4 = (v4 + *(_BYTE *)(8 * j + v10 + 2)) & 0xFF;
    }
    else if ( v5 == 3 )
    {
      v12 = *(_DWORD *)((char *)&unk_81F0520 + v3);
      for ( k = 0; k < v2; k = (k + 1) & 0xFF )
        v4 = (v4 + *(_BYTE *)(16 * k + v12 + 2)) & 0xFF;
    }
  }
  else if ( !*((_BYTE *)&gTrainers + v3) )
  {
    v6 = *(_DWORD *)((char *)&unk_81F0520 + v3);
    for ( l = 0; l < v2; l = (l + 1) & 0xFF )
      v4 = (v4 + *(_BYTE *)(8 * l + v6 + 2)) & 0xFF;
  }
  return v4;
}
