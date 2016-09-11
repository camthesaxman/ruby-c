int __fastcall sub_8051A3C(unsigned __int16 a1)
{
  unsigned int v1; // r5@1
  unsigned int v2; // r6@3
  unsigned __int8 v4; // [sp+0h] [bp-18h]@4
  unsigned __int8 v5; // [sp+1h] [bp-17h]@5
  unsigned __int8 v6; // [sp+2h] [bp-16h]@5
  unsigned __int8 v7; // [sp+3h] [bp-15h]@5
  unsigned __int8 v8; // [sp+4h] [bp-14h]@5
  int v9; // [sp+14h] [bp-4h]@5

  v1 = sub_8051A1C(a1);
  if ( *(_WORD *)(dword_3004854 + 90) < v1 )
    *(_WORD *)(dword_3004854 + 90) = v1;
  v2 = 0;
  do
  {
    *(&v4 + v2) = v1 % 0xA;
    v1 /= 0xAu;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 4 );
  v6006458 = v8 - 32398;
  v600645A = v7 - 32398;
  v600645C = v6 - 32398;
  v6006460 = v5 - 32398;
  v6006462 = v4 - 32398;
  return v9;
}
