int __fastcall sub_804A41C(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r6@1
  int v3; // r4@3
  unsigned int *v4; // r0@3
  char v6; // [sp+4h] [bp-60h]@5
  char v7; // [sp+1Ch] [bp-48h]@1
  char v8; // [sp+1Dh] [bp-47h]@1
  char v9; // [sp+1Eh] [bp-46h]@1
  char v10; // [sp+1Fh] [bp-45h]@1
  char v11; // [sp+20h] [bp-44h]@1
  char v12; // [sp+21h] [bp-43h]@1
  __int16 v13; // [sp+22h] [bp-42h]@5
  int v14; // [sp+60h] [bp-4h]@6

  v1 = a1;
  v7 = -4;
  v8 = 6;
  v9 = 4;
  v10 = -4;
  v11 = 17;
  v12 = 0;
  v2 = 0;
  if ( (unsigned int)*(_BYTE *)(dword_3004824 + 66 + a1) > 0 )
  {
    do
    {
      if ( v1 )
      {
        v3 = 25 * v2;
        v4 = (unsigned int *)&unk_30045C0;
      }
      else
      {
        v3 = 25 * v2;
        v4 = dword_3004360;
      }
      GetMonData((int)&v4[v3], 2, (int)&v6);
      StringCopy10((int)&v13, (int)&v6);
      GetMonGender();
      v12 = (50 - (unsigned __int8)GetStringWidthGivenWindowConfig((int)&gWindowConfig_81E7294, (int)&v13)) / 2;
      sub_8003460(
        dword_3004824 + 4,
        (int)&v7,
        132 * v1 + *(_BYTE *)(dword_3004824 + 122) + 22 * v2,
        gTradeMonSpriteCoords[2 * (v2 + 6 * v1)],
        byte_820C29D[2 * (v2 + 6 * v1)]);
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 < *(_BYTE *)(dword_3004824 + 66 + v1) );
  }
  return v14;
}
