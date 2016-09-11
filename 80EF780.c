int __fastcall sub_80EF780(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( LOWORD(dword_3004B20[10 * a1 + 2]) && !(v2006DA2 & 7) )
  {
    v2006DA2 = 0;
    v2006DA0 = 0;
    v400001C = 0;
  }
  else
  {
    sub_80EF740();
  }
  return v2;
}
