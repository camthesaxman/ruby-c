int __fastcall sub_8149A60(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 19) )
    --*((_WORD *)v1 + 19);
  else
    DestroyTask(a1);
  return v3;
}
