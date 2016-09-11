int __fastcall sub_806BF24(_BYTE *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  _BYTE *v4; // r7@1
  unsigned int v5; // r2@1
  signed int v6; // r4@1
  int v7; // r6@1
  unsigned int *v8; // r5@1
  int v9; // r2@1
  int v11; // [sp+10h] [bp-4h]@0

  v4 = a1;
  v5 = a3 << 24;
  v6 = v5 >> 24;
  v7 = a4;
  v8 = &dword_3004360[25 * a2];
  if ( GetMonData((int)v8, 11, v5) && !GetMonData((int)v8, 57, v9) )
    v6 = 5;
  if ( v7 == 1 )
    v6 = (v6 + 4) & 0xFF;
  task_pc_turn_off(v4, v6);
  return v11;
}
