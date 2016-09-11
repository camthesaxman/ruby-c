int __fastcall sub_8077ABC(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
  int result; // r0@7
  int v5; // r1@11
  int v6; // r2@13
  int v7; // r1@14
  int v8; // r0@15
  unsigned int *v9; // r1@15
  int v10; // r0@21
  signed int v11; // r2@21

  v2 = a1;
  v3 = a2;
  if ( sub_8076BE0() << 24 && v3 == 3 && v2 == 3 )
    v3 = 1;
  if ( v3 > 4 )
  {
def_8077AE6:
    if ( sub_8076BE0() << 24 )
    {
      if ( v201934C & 1 )
        v5 = v201934A;
      else
        v5 = v2019348;
_08077BDE:
      if ( v3 == 3 )
      {
        v10 = v2;
        v11 = 1;
      }
      else
      {
        v10 = v2;
        v11 = 0;
      }
      return (unsigned __int8)sub_8077E44(v10, v5, v11);
    }
    if ( battle_side_get_owner(v2) << 24 )
    {
      v7 = 4 * v2 + 33650688;
      if ( !*(_WORD *)(4 * v2 + 0x2017802) )
      {
        v8 = 25 * *(_WORD *)(2 * v2 + 0x2024A6A);
        v9 = (unsigned int *)&unk_30045C0;
_08077BC2:
        v5 = GetMonData((int)&v9[v8], 11, v6) & 0xFFFF;
        goto _08077BDE;
      }
    }
    else
    {
      v7 = 4 * v2 + 33650688;
      if ( !*(_WORD *)(4 * v2 + 0x2017802) )
      {
        v8 = 25 * *(_WORD *)(2 * v2 + 0x2024A6A);
        v9 = dword_3004360;
        goto _08077BC2;
      }
    }
    v5 = *(_WORD *)(v7 + 2);
    goto _08077BDE;
  }
  switch ( v3 )
  {
    case 0u:
    case 2u:
      result = *(&gUnknown_0837F578[16 * (v20239F8 & 1)] + (4 * battle_get_per_side_status(v2) & 0x3FF));
      break;
    case 1u:
      result = *(&gUnknown_0837F578[16 * (v20239F8 & 1) + 1] + (4 * battle_get_per_side_status(v2) & 0x3FF));
      break;
    default:
      goto def_8077AE6;
  }
  return result;
}
