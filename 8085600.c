int __fastcall affects_encounter_rate_based_on_flags(int *a1)
{
  int *v1; // r4@1
  int v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)FlagGet(0x84Du) == 1 )
  {
    v2 = *v1 + ((unsigned int)*v1 >> 1);
_08085632:
    *v1 = v2;
    return v4;
  }
  if ( (unsigned __int8)FlagGet(0x84Eu) == 1 )
  {
    v2 = (unsigned int)*v1 >> 1;
    goto _08085632;
  }
  return v4;
}
