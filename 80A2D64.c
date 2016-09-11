signed int __fastcall sub_80A2D64(signed int result, _WORD *a2)
{
  __int16 v2; // r2@1

  v2 = result - 30000;
  if ( (unsigned __int16)(result - 30000) > 0x1Bu )
  {
    result = (unsigned __int16)result;
  }
  else
  {
    result = 201;
    *a2 = v2;
  }
  return result;
}
