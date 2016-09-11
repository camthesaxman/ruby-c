int __fastcall UpdateMassOutbreakTimeLeft(unsigned __int16 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( v2028242 > (unsigned int)a1 )
    v2028242 -= a1;
  else
    EndMassOutbreak();
  return v2;
}
