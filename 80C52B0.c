int __fastcall sp000_heal_pokemon(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r0@2
  int v5; // r2@2
  int v6; // r2@2
  int v7; // r7@2
  unsigned int v8; // r5@2
  unsigned __int8 v9; // r9@2
  unsigned __int16 v10; // r0@3
  char v12; // [sp+0h] [bp-24h]@2
  char v13; // [sp+1h] [bp-23h]@2
  char v14; // [sp+2h] [bp-22h]@4
  char v15; // [sp+3h] [bp-21h]@4
  int v16; // [sp+20h] [bp-4h]@5

  v3 = 0;
  if ( (unsigned __int8)byte_3004350 > 0u )
  {
    do
    {
      v4 = GetMonData((int)&dword_3004360[25 * v3], 58, a3);
      v12 = v4;
      v13 = (unsigned int)(v4 << 16) >> 24;
      SetMonData((int)&dword_3004360[25 * v3], 57, (int)&v12);
      v7 = GetMonData((int)&dword_3004360[25 * v3], 21, v5) & 0xFF;
      v8 = 0;
      v9 = v3 + 1;
      do
      {
        v10 = GetMonData((int)&dword_3004360[25 * v3], v8 + 13, v6);
        v12 = CalcPPWithPPUps(v10, v7, v8);
        SetMonData((int)&dword_3004360[25 * v3], v8 + 17, (int)&v12);
        v8 = (v8 + 1) & 0xFF;
      }
      while ( v8 <= 3 );
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      SetMonData((int)&dword_3004360[25 * v3], 55, (int)&v12);
      v3 = (unsigned __int8)(v3 + 1);
    }
    while ( v9 < (unsigned int)(unsigned __int8)byte_3004350 );
  }
  return v16;
}
