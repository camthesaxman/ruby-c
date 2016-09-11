int __fastcall sub_80B99B4(unsigned __int8 a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( !LOBYTE(dword_3004B20[10 * LOWORD(dword_3004B20[10 * a1 + 7]) + 1]) )
    DestroyTask(a1);
  return v2;
}
