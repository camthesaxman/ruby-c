int __fastcall sub_81422B8(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 7) )
    --*((_WORD *)v1 + 7);
  else
    *v1 = (int)sub_81422E8;
  return v3;
}
