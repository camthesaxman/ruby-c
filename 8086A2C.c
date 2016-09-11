int __fastcall sub_8086A2C(unsigned __int8 a1, char a2)
{
  int v2; // r4@1
  int *v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a1;
  v3 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_8086A68, a2)];
  *((_WORD *)v3 + 5) = 0;
  if ( v2 == 106 )
    *((_WORD *)v3 + 5) = 1;
  return v5;
}
