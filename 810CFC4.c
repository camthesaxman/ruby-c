int __fastcall sub_810CFC4(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 6) )
    --*((_WORD *)v1 + 6);
  else
    SetMainCallback2(dword_3001778);
  return v3;
}
